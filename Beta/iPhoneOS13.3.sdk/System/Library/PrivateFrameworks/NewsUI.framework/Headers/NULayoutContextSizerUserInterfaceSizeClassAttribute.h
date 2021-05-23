/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NULayoutContextSizerUserInterfaceSizeClassAttribute : NSObject

{
    long long _widthUserInterfaceSizeClass;
    long long _heightUserInterfaceSizeClass;
}

@property (nonatomic, readonly) long long widthUserInterfaceSizeClass;
@property (nonatomic, readonly) long long heightUserInterfaceSizeClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)matchForLayoutContext:(id)arg1;
- (id)initWithWidthUserInterfaceSizeClass:(long long)arg1 heightUserInterfaceSizeClass:(long long)arg2;

@end
