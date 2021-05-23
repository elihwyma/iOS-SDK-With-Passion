/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSArray, NSError, NSString;

@protocol TBTile;

@interface TBLocalFetchTileItem : NSObject

{
    NSError *_error;
    NSArray *_networks;
    unsigned long long _status;
    id <TBTile> _tile;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long status;
@property (nonatomic, readonly) id <TBTile> tile;
@property (nonatomic, readonly) NSArray *networks;
@property (nonatomic, readonly) NSError *error;

- (id)initWithTile:(id)arg1 error:(id)arg2;

@end
