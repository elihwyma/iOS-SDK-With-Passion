/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface DMFConfigurationOrganization : NSObject

{
    _Bool _active;
    NSString *_identifier;
    NSString *_displayName;
    NSString *_type;
    NSArray *_registeredConfigurationSources;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) _Bool active;
@property (copy, nonatomic) NSArray *registeredConfigurationSources;

- (id)init;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
