/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@class VMUMutableClassInfo;

@interface VMUSwiftRuntimeInfo : NSObject

{
    unsigned long long _nativeWeakReferenceMarkerMask;
    unsigned long long _nativeWeakReferenceMarkerValue;
    unsigned long long _nativeWeakReferencePointerMask;
    _Bool _nativeWeakReferencePointerIsSideTable;
    unsigned long long _refcountIsSideTableMarkerMask;
    unsigned long long _refcountIsSideTableMarkerValue;
    unsigned long long _sideTablePointerMask;
    unsigned char _sideTablePointerRightShift;
    unsigned char _sideTablePointerLeftShift;
    VMUMutableClassInfo *_sideTableLayout;
    VMUMutableClassInfo *_unownedExtraDataLayout;
    _Bool _runtimeHasStableABI;
}

@property (nonatomic, readonly) unsigned long long nativeWeakReferenceMarkerMask;
@property (nonatomic, readonly) unsigned long long nativeWeakReferenceMarkerValue;
@property (nonatomic, readonly) unsigned long long nativeWeakReferencePointerMask;
@property (nonatomic, readonly) _Bool nativeWeakReferencePointerIsSideTable;
@property (nonatomic, readonly) unsigned long long refcountIsSideTableMarkerMask;
@property (nonatomic, readonly) unsigned long long refcountIsSideTableMarkerValue;
@property (nonatomic, readonly) unsigned long long sideTablePointerMask;
@property (nonatomic, readonly) unsigned char sideTablePointerRightShift;
@property (nonatomic, readonly) unsigned char sideTablePointerLeftShift;
@property (nonatomic, readonly) VMUMutableClassInfo *sideTableLayout;
@property (nonatomic, readonly) VMUMutableClassInfo *unownedExtraDataLayout;
@property (nonatomic, readonly) _Bool runtimeHasStableABI;

- (id)initWithSwiftCore:(struct _CSTypeRef)arg1 memoryReader:(CDUnknownBlockType)arg2;

@end
