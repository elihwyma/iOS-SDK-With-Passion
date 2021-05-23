/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSBundle, NSMutableDictionary, NSString;

@interface AXCodeItem : NSObject

{
    NSBundle *_cachedBundle;
    struct {
        unsigned int isDyldOpened:1;
    } _flags;
    unsigned long long _loadedAtTimestamp;
    unsigned short _loadOrder;
    NSMutableDictionary *_platformToTarget;
    NSString *_path;
    AXCodeItem *_associatedAccessibilityCodeItem;
    long long _type;
    NSString *_name;
    long long _targetType;
    AXCodeItem *_targetCodeItem;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSMutableDictionary *platformToTarget;
@property (nonatomic) long long targetType;
@property (nonatomic) unsigned short loadOrder;
@property (weak, nonatomic) AXCodeItem *associatedAccessibilityCodeItem;
@property (weak, nonatomic) AXCodeItem *targetCodeItem;
@property (nonatomic, readonly) NSString *debugCodeTypeDescription;
@property (nonatomic, readonly) NSBundle *cachedBundle;
@property (nonatomic) _Bool isLoaded;
@property (nonatomic, readonly) unsigned long long loadedAtTimestamp;
@property (nonatomic, readonly) _Bool isAccessibilityBundle;

+ (id)_codeItemQueue;
+ (long long)codeItemTypeFromString:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithPath:(id)arg1 isDyldOpened:(_Bool)arg2;
- (void)addPlatformToTargetEntries:(id)arg1;
- (void)loadWithStrategy:(long long)arg1 onQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_cacheLazyProperties;
- (_Bool)_isSystemAppAccessibilityBundle;
- (id)prepareBackingBundleIfNeeded:(id *)arg1;
- (id)initAccessibilityCodeItemWithPath:(id)arg1 targetType:(long long)arg2 platformToTarget:(id)arg3 loadOrder:(unsigned short)arg4;

@end
