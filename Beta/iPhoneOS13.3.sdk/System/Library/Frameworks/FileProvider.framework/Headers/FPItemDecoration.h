/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface FPItemDecoration : NSObject

{
    NSString *_decorationIdentifier;
    NSString *_labelFormat;
    NSArray *_labelKeys;
    NSString *_type;
    NSString *_imageType;
    NSString *_bundleIdentifier;
    _Bool _dependsOnParent;
    _Bool _dependsOnStyle;
}

@property (copy, nonatomic, readonly) NSString *decorationIdentifier;
@property (copy, nonatomic, readonly) NSString *type;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (copy, nonatomic, readonly) NSString *imageType;
@property (nonatomic, readonly) _Bool requiresFetchingInfoFirst;

+ (void)initialize;
+ (id)decorationWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)_loadDecorationsFromPlist:(id)arg1 bundleIdentifier:(id)arg2 bundle:(struct __CFBundle *)arg3;
+ (id)_decorationCache;
+ (void)_loadBuiltinDecorationTypes;
+ (id)_fetchFromCacheWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
+ (void)fetchInfoForItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)infoForItem:(id)arg1 parentInfo:(id)arg2;

- (id)description;
- (id)initWithPlistEntry:(id)arg1 bundle:(struct __CFBundle *)arg2 bundleIdentifier:(id)arg3;
- (id)parentDependingKeys;
- (id)styleDependingKeys;
- (id)labelWithItem:(id)arg1 error:(id *)arg2 style:(unsigned long long)arg3;
- (id)labelWithInfo:(id)arg1 error:(id *)arg2;
- (id)labelWithInfo:(id)arg1 error:(id *)arg2 style:(unsigned long long)arg3;
- (id)labelWithItem:(id)arg1 error:(id *)arg2;
- (id)labelsWithInfo:(id)arg1 error:(id *)arg2;
- (id)labelsWithItem:(id)arg1 error:(id *)arg2;
- (void)folderStatusForItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
