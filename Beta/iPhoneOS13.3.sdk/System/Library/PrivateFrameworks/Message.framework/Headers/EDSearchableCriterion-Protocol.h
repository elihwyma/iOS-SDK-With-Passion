/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/Swift-Protocol.h>

@class NSString;

@protocol EDSearchableCriterion <Swift>

@property (nonatomic, readonly, getter=isFullTextSearchableCriterion) _Bool fullTextSearchableCriterion;
@property (nonatomic, readonly) NSString *spotlightQueryString;

@end
