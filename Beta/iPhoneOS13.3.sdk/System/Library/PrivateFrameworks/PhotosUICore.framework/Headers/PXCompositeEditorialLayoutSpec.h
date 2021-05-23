/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable;

@interface PXCompositeEditorialLayoutSpec : NSObject

{
    NSArray *_templates;
    long long _minNumberOfRects;
    long long _maxNumberOfRects;
    long long _minNumberOfColumns;
    NSMapTable *_preferredNextTemplatesByCurrentTemplate;
}

@property (nonatomic, readonly) NSMapTable *preferredNextTemplatesByCurrentTemplate;
@property (nonatomic, readonly) NSArray *templates;
@property (nonatomic, readonly) long long minNumberOfRects;
@property (nonatomic, readonly) long long maxNumberOfRects;
@property (nonatomic, readonly) long long minNumberOfColumns;

+ (id)defaultSpec;

- (id)init;
- (id)_init;
- (void)prepareBuiltinSpec;
- (id)preferredNextTemplatesForTemplate:(id)arg1;

@end
