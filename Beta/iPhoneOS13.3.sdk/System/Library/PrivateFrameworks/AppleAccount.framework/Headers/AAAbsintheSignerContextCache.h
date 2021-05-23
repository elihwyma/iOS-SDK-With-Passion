/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

@class AAAbsintheContext, NSDate;

@interface AAAbsintheSignerContextCache : NSObject

{
    NSDate *_creationDate;
    AAAbsintheContext *_context;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) AAAbsintheContext *context;

+ (id)cacheWithContext:(id)arg1;

- (id)init;
- (id)initWithContext:(id)arg1;

@end
