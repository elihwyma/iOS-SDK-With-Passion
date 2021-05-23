/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSDate, NSDictionary, NSString;

@protocol PXDisplaySuggestion <Swift>

@property (nonatomic, readonly) unsigned short state;
@property (nonatomic, readonly) unsigned short type;
@property (nonatomic, readonly) unsigned short subtype;
@property (copy, nonatomic, readonly) NSString *localIdentifier;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSDictionary *actionProperties;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;

- (unsigned short)fetchKeyAssets;

@end
