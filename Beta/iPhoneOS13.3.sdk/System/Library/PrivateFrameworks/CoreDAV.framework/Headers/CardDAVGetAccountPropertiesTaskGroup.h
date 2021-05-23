/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVGetAccountPropertiesTaskGroup.h>

@class NSSet;

@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup

{
    NSSet *_addressBookHomes;
    NSSet *_directoryGatewayURLs;
}

@property (nonatomic, readonly) NSSet *addressBookHomes;
@property (nonatomic, readonly) NSSet *directoryGatewayURLs;

- (id)description;
- (id)_copyAccountPropertiesPropFindElements;
- (void)_setPropertiesFromParsedResponses:(id)arg1;
- (id)homeSet;
- (id)directoryGatewayURL;

@end
