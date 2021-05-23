/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@protocol FCChannelProviding;

@protocol FCDraftAccessCheckable <Swift>

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) id <FCChannelProviding> sourceChannel;
@property (nonatomic, readonly) _Bool isDraft;
@property (nonatomic, readonly) _Bool isLocalDraft;

@end
