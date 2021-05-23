/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADShapeProperties.h>

@class OADConnection;

__attribute__((visibility("hidden")))
@interface OADConnectorProperties : OADShapeProperties

{
    OADConnection *mFrom;
    OADConnection *mTo;
}

+ (id)defaultProperties;

- (id)init;
- (id)description;
- (id)to;
- (id)from;
- (id)initWithDefaults;

@end
