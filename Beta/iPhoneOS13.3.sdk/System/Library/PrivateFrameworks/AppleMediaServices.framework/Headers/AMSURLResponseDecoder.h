/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSIndexSet, NSSet;

@interface AMSURLResponseDecoder : NSObject

{
    NSIndexSet *_allowedStatusCodes;
    NSSet *_allowedContentTypes;
}

@property (copy, nonatomic) NSIndexSet *allowedStatusCodes;
@property (copy, nonatomic) NSSet *allowedContentTypes;

- (id)init;
- (id)resultFromResult:(id)arg1 error:(id *)arg2;

@end
