/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

#import <RelevanceEngine/Swift-Protocol.h>

@protocol REElementActionDelegate;

@interface REElementAction : NSObject <Swift>

{
    id <REElementActionDelegate> _delegate;
    _Bool _forceExecution;
}

@property (nonatomic) _Bool forceExecution;
@property (weak, nonatomic) id <REElementActionDelegate> delegate;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_performWithContext:(id)arg1;
- (void)_didFinish:(_Bool)arg1;

@end
