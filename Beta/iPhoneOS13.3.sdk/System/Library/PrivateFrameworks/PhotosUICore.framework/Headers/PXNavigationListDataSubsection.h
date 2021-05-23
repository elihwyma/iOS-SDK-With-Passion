/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, PXDataSection, PXNavigationListDataSection;

@interface PXNavigationListDataSubsection : NSObject

{
    NSMutableDictionary *_listItemsCache;
    PXDataSection *_dataSection;
    PXNavigationListDataSection *_listDataSection;
    long long _indentationLevel;
    long long _indexDelta;
    long long _expandedIndex;
    long long _externalStartIndex;
}

@property (nonatomic, readonly) PXDataSection *dataSection;
@property (nonatomic, readonly) PXNavigationListDataSection *listDataSection;
@property (nonatomic, readonly) long long indentationLevel;
@property (nonatomic, readonly) long long indexDelta;
@property (nonatomic, readonly) long long expandedIndex;
@property (nonatomic, readonly) long long externalStartIndex;

- (id)description;
- (id)initWithDataSection:(id)arg1 indexDelta:(long long)arg2 expandedIndex:(long long)arg3 indentationLevel:(long long)arg4 externalStartIndex:(long long)arg5;
- (id)listItemAtExternalIndex:(long long)arg1;

@end
