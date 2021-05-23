/*
 Image: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
 */

#import <NSObject.h>

@class NSDictionary;

@interface CalItemMetadata : NSObject

{
    NSDictionary *_x_props;
    int _classification;
}

@property (retain) NSDictionary *x_props;
@property int classification;

+ (_Bool)supportsSecureCoding;
+ (id)metadataWithData:(id)arg1;
+ (id)metadataWithICSComponent:(id)arg1;
+ (id)_whitelistedClassesForSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dataRepresentationWithExistingMetaData:(id)arg1;
- (void)applyToComponent:(id)arg1;
- (id)initWithICSComponent:(id)arg1;

@end
