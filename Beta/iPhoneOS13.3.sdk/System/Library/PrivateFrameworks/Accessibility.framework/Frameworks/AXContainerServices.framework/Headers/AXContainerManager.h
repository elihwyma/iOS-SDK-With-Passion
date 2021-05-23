/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXContainerServices.framework/AXContainerServices
 */

#import <Foundation/NSObject.h>

@class AXUIClient;

@interface AXContainerManager : NSObject

{
    AXUIClient *_containerServerClient;
}

@property (retain, nonatomic) AXUIClient *containerServerClient;

+ (id)sharedManager;

- (void)readDataForFileAtAccessibilityContainerPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)writeData:(id)arg1 toFileAtAccessibilityContainerPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteFileAtAccessibilityContainerPath:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
