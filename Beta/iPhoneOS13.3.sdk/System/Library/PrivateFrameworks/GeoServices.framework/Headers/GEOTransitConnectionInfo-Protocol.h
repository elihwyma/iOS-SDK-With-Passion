/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSArray, NSString, NSURL;

@protocol GEOTransitConnectionInfo <Swift>

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *labelItems;
@property (nonatomic, readonly) NSURL *urlToOpen;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) int providerID;

@end
