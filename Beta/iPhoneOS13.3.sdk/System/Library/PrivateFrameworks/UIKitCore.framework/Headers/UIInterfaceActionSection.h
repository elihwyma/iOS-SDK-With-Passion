/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionSection : NSObject <Swift>

{
    NSArray *_actions;
    NSString *_sectionID;
}

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) NSString *sectionID;

+ (id)actionsFromSections:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithActions:(id)arg1;
- (id)copyOfActions;

@end
