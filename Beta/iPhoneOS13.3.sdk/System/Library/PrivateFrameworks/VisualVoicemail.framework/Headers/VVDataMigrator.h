/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VVDataMigrator : NSObject

{
    NSString *_serviceIdentifier;
    NSString *_searchHint;
    NSString *_isoCountryCode;
}

@property (copy, nonatomic) NSString *serviceIdentifier;
@property (copy, nonatomic) NSString *searchHint;
@property (copy, nonatomic) NSString *isoCountryCode;

+ (id)homeDirectory;
+ (id)carrierServiceName;

- (void)performMigrationIfNecessary;
- (_Bool)shouldPerformMigration;
- (void)performIMAPFilePathMigration;
- (void)createFoldersIfNecessary;

@end
