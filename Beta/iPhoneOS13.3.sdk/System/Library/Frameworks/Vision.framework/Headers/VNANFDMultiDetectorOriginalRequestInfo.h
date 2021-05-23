/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VNANFDMultiDetectorOriginalRequestInfo : NSObject

{
    NSString *_requestRevisionKey;
    unsigned long long _originalRequestResultsIndex;
}

@property (readonly) NSString *requestRevisionKey;
@property (readonly) unsigned long long originalRequestResultsIndex;

- (id)initWithProcessingOptionRequestRevisionKey:(id)arg1 originalRequestResultsIndex:(unsigned long long)arg2;

@end
