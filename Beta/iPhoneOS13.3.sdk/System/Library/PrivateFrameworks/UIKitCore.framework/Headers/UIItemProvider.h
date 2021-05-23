/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSItemProvider.h>

@class NSDate, NSDictionary, NSNumber, NSString;

@interface UIItemProvider : NSItemProvider

{
    NSDictionary *_teamMetadata;
}

@property (copy, nonatomic) NSDictionary *teamMetadata;
@property (nonatomic) struct CGSize estimatedDisplayedSize;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *modificationDate;
@property (copy, nonatomic) NSNumber *size;

- (id)initWithPBItem:(id)arg1;
- (id)copyDataRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)copyDataRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)copyFileRepresentationForTypeIdentifier:(id)arg1 toURL:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void)copyFileRepresentationForTypeIdentifier:(id)arg1 toURL:(id)arg2 options:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)canCreateObjectOfClass:(Class)arg1;
- (id)instantiateObjectOfClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (void)instantiateObjectOfClass:(Class)arg1 options:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)registerDataRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 loadHandler:(CDUnknownBlockType)arg3;
- (void)registerFileRepresentationForTypeIdentifier:(id)arg1 fileOptions:(long long)arg2 options:(id)arg3 loadHandler:(CDUnknownBlockType)arg4;
- (void)registerDataRepresentationForTypeIdentifier:(id)arg1 loadHandler:(CDUnknownBlockType)arg2;
- (void)registerFileRepresentationForTypeIdentifier:(id)arg1 fileOptions:(long long)arg2 loadHandler:(CDUnknownBlockType)arg3;
- (id)copyDataRepresentationForTypeIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)copyDataRepresentationForTypeIdentifier:(id)arg1 error:(id *)arg2;
- (id)copyFileRepresentationForTypeIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)copyFileRepresentationForTypeIdentifier:(id)arg1 error:(id *)arg2;
- (id)getInPlaceFileRepresentationForTypeIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getInPlaceFileRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)getInPlaceFileRepresentationForTypeIdentifier:(id)arg1 inPlace:(_Bool *)arg2 error:(id *)arg3;
- (id)getInPlaceFileRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)registerObject:(id)arg1 options:(id)arg2;
- (void)registerObjectOfClass:(Class)arg1 options:(id)arg2 loadHandler:(CDUnknownBlockType)arg3;
- (_Bool)canInstantiateObjectOfClass:(Class)arg1;
- (id)createObjectOfClass:(Class)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)createObjectOfClass:(Class)arg1 error:(id *)arg2;

@end
