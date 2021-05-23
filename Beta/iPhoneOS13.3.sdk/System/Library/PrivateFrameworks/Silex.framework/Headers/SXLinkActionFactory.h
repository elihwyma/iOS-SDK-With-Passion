/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXURLActionFactory;

@interface SXLinkActionFactory : NSObject

{
    id <SXURLActionFactory> _URLActionFactory;
}

@property (nonatomic, readonly) id <SXURLActionFactory> URLActionFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)actionForAddition:(id)arg1;
- (id)actionForURL:(id)arg1;
- (id)initWithURLActionFactory:(id)arg1;

@end
