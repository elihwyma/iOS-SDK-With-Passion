/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSExtension, NSUUID;

@protocol PKPlugIn;

@interface _UIRemoteViewService : NSObject

{
    _Bool _overridesHostAppearance;
    NSExtension *_extension;
    NSUUID *_contextToken;
}

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) id <PKPlugIn> plugin;
@property (nonatomic, readonly) _Bool overridesHostAppearance;
@property (copy, nonatomic) NSUUID *contextToken;

- (id)initWithExtension:(id)arg1 andContextToken:(id)arg2;
- (void)updateOverridesHostAppearance;
- (id)initWithPlugIn:(id)arg1 andContextToken:(id)arg2;

@end
