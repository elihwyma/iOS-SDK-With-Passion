/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSString.h>

@interface WFDeferredLocalizedString : NSString

{
    NSString *_localizedValue;
    NSString *_backingStore;
}

@property (copy, nonatomic) NSString *backingStore;
@property (copy, nonatomic) NSString *localizedValue;

- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)initWithCharactersNoCopy:(unsigned short *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;

@end
