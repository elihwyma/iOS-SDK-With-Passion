/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface NTKEditOptionCollection : NSObject

{
    long long _mode;
    NSString *_localizedName;
    NSArray *_options;
    unsigned long long _collectionType;
}

@property (nonatomic, readonly) long long swatchStyle;
@property (nonatomic, readonly) NSString *optionsDescription;
@property (nonatomic) long long mode;
@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) NSArray *options;
@property (nonatomic) unsigned long long collectionType;

+ (id)editOptionCollectionWithEditMode:(long long)arg1 localizedName:(id)arg2 options:(id)arg3 collectionType:(unsigned long long)arg4;

- (_Bool)isEqual:(id)arg1;
- (id)initWithEditMode:(long long)arg1 localizedName:(id)arg2 options:(id)arg3 collectionType:(unsigned long long)arg4;
- (id)filteredCollectionForDevice:(id)arg1;
- (id)filteredCollectionWithObjectsPassingTest:(CDUnknownBlockType)arg1;

@end
