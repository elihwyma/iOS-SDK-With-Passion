/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TVRCDeviceInfo : NSObject

{
    NSString *_mediaRemoteID;
    NSString *_airplayID;
}

@property (readonly) NSString *mediaRemoteID;
@property (readonly) NSString *airplayID;

- (id)description;
- (_Bool)containsID:(id)arg1;
- (void)_populateValidIdentifiers:(id)arg1;

@end
