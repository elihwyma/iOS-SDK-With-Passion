/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class AXMSpeechFormatterCache, NSRegularExpression;

@interface AXMDataDetector : NSObject

{
    NSRegularExpression *_emailAddressRegex;
    AXMSpeechFormatterCache *_speechFormatterCache;
}

- (void)_enumerateText:(id)arg1 textCheckingType:(unsigned long long)arg2 datatype:(unsigned long long)arg3 withBlock:(CDUnknownBlockType)arg4;
- (id)emailAddressRegex;
- (void)_enumerateText:(id)arg1 regularExpression:(id)arg2 datatype:(unsigned long long)arg3 withBlock:(CDUnknownBlockType)arg4;
- (id)initWithSpeechFormatterCache:(id)arg1;
- (void)enumerateText:(id)arg1 searchingFordatatypes:(id)arg2 withBlock:(CDUnknownBlockType)arg3;

@end
