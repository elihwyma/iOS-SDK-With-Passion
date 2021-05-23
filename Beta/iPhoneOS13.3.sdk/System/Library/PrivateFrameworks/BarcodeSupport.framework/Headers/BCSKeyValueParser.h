/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BCSKeyValueParser : NSObject

{
    NSString *_string;
    unsigned long long _currentIndex;
    unsigned long long _stringLength;
    NSMutableDictionary *_keyValuePairs;
}

@property (copy, nonatomic, readonly) NSDictionary *keyValuePairs;

- (id)initWithString:(id)arg1 startIndex:(unsigned long long)arg2;
- (_Bool)_parseNextKeyValuePair;
- (unsigned long long)_indexOfDelimiter:(id)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)_numberOfPreviousBackSlashesFromIndex:(unsigned long long)arg1 withinRange:(struct _NSRange)arg2;

@end
