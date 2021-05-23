/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOPDTransitConnection, NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _GEOTransitConnectionInfo : NSObject

{
    GEOPDTransitConnection *_connection;
    int _providerID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *labelItems;
@property (nonatomic, readonly) NSURL *urlToOpen;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) int providerID;

- (id)initWithConnection:(id)arg1 providerID:(int)arg2;

@end
