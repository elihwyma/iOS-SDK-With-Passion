/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDateInterval, NSString;

@interface PXCuratedLibraryVisibleContentSnapshot : NSObject

{
    CDUnknownBlockType _dateIntervalFuture;
    CDUnknownBlockType _locationNamesFuture;
    unsigned long long _dataSourceIdentifier;
    _Bool _isFiltering;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) NSArray *locationNames;
@property (nonatomic, readonly) unsigned long long dateIntervalGranularity;
@property (nonatomic, readonly) NSString *localizedPlaceholderText;

- (id)init;
- (id)initWithLibraryLayout:(id)arg1;

@end
