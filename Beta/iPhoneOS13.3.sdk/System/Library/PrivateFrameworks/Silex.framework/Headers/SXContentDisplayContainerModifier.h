/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SXContentDisplayContainerModifier : NSObject

{
    NSMutableDictionary *_containers;
}

@property (nonatomic, readonly) NSMutableDictionary *containers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)modifyDOM:(id)arg1 context:(id)arg2;
- (void)ensureWrappingContainerComponentForComponents:(id)arg1 parentComponent:(id)arg2;

@end
