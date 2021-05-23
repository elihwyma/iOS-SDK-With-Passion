/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCTodayPluginFeedGroupEmittingOperation : FCFeedGroupEmittingOperation

{
    long long _bridgedGroupType;
}

@property (nonatomic, readonly) long long bridgedGroupType;

- (void)_performOperation;
- (_Bool)validateOperation;
- (void)performOperation;
- (id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4;
- (id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 bridgedGroupType:(long long)arg5;

@end
