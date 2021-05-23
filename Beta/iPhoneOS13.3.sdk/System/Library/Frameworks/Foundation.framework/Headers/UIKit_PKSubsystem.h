/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface UIKit_PKSubsystem : NSObject

{
    _Bool _initialized;
    _Bool _plugInKitProcess;
    NSDictionary *_infoDictionary;
}

@property (copy, nonatomic) NSDictionary *infoDictionary;
@property (nonatomic, getter=isPlugInKitProcess) _Bool plugInKitProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)initForPlugInKit;
+ (id)initForPlugInKitWithOptions:(id)arg1;

- (void)dealloc;
- (void)endUsing:(id)arg1;
- (void)beginUsing:(id)arg1 withBundle:(id)arg2;

@end
