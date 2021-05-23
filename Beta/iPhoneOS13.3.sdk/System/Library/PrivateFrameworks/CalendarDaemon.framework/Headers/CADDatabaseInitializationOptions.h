/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <Foundation/NSObject.h>

@class CADChangeTrackingClientId, NSString;

@interface CADDatabaseInitializationOptions : NSObject

{
    _Bool _enablePropertyModificationLogging;
    _Bool _unitTesting;
    _Bool _allowDelegateSources;
    int _databaseInitOptions;
    int _management;
    CADChangeTrackingClientId *_changeTrackingClientId;
    NSString *_managementBundleIdentifier;
    NSString *_databasePath;
}

@property (nonatomic) int databaseInitOptions;
@property (retain, nonatomic) CADChangeTrackingClientId *changeTrackingClientId;
@property (nonatomic) _Bool enablePropertyModificationLogging;
@property (nonatomic) int management;
@property (retain, nonatomic) NSString *managementBundleIdentifier;
@property (retain, nonatomic) NSString *databasePath;
@property (nonatomic) _Bool unitTesting;
@property (nonatomic) _Bool allowDelegateSources;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToOptions:(id)arg1;
- (id)validOptionsForConnection:(id)arg1;

@end
