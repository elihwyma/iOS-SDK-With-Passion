/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NUExtensionContextProvider;

@interface NUExtensionAssembly : NSObject

{
    id <NUExtensionContextProvider> _extensionContextProvider;
}

@property (weak, nonatomic, readonly) id <NUExtensionContextProvider> extensionContextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadInRegistry:(id)arg1;
- (id)initWithExtensionContextProvider:(id)arg1;

@end
