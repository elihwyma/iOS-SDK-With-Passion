/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSMutableArray, NSString;

@interface _UIAppearanceRecorder : NSObject

{
    NSString *_classNameToRecord;
    Class _superclassToRecord;
    NSArray *_containerClassNames;
    NSMutableArray *_customizations;
    NSArray *_unarchivedCustomizations;
}

@property (copy, nonatomic, setter=_setClassNameToRecord:) NSString *_classNameToRecord;
@property (nonatomic, setter=_setSuperclassToRecord:) Class _superclassToRecord;
@property (copy, nonatomic, setter=_setContainerClassNames:) NSArray *_containerClassNames;
@property (nonatomic, readonly) NSData *_serializedRepresentation;

+ (id)_sharedAppearanceRecorder;
+ (id)_sharedAppearanceRecorderForClassNamed:(id)arg1 superclass:(Class)arg2 whenContainedIn:(id)arg3;
+ (id)_sharedAppearanceRecorderForClass:(Class)arg1 whenContainedIn:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithSerializedRepresentation:(id)arg1;
- (void)_recordInvocation:(id)arg1 withClassName:(id)arg2 containerClassNames:(id)arg3 traitCollection:(id)arg4 selectorString:(id)arg5 forRemoteProcess:(_Bool)arg6;
- (void)_importCustomizations:(id)arg1 withArchiveVersion:(long long)arg2;
- (void)_applyCustomizations;

@end
