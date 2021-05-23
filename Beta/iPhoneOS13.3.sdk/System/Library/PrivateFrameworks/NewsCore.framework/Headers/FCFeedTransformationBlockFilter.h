/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@interface FCFeedTransformationBlockFilter : NSObject <Swift>

{
    CDUnknownBlockType _predicate;
}

@property (copy, nonatomic) CDUnknownBlockType predicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)blockFilterWithPredicate:(CDUnknownBlockType)arg1;

- (id)transformFeedItems:(id)arg1;

@end
