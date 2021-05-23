/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXActionProvider, SXActionSerializer;

@interface SXSmartFieldFactory : NSObject

{
    id <SXActionProvider> _actionProvider;
    id <SXActionSerializer> _actionSerializer;
}

@property (nonatomic, readonly) id <SXActionProvider> actionProvider;
@property (nonatomic, readonly) id <SXActionSerializer> actionSerializer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)smartFieldForAddition:(id)arg1 withContext:(id)arg2;
- (id)initWithActionProvider:(id)arg1 actionSerializer:(id)arg2;

@end
