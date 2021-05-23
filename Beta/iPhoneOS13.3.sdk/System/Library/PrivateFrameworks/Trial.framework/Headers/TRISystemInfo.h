/*
 Image: /System/Library/PrivateFrameworks/Trial.framework/Trial
 */

#import <Foundation/NSObject.h>

@interface TRISystemInfo : NSObject

{
    _Bool _isBetaUser;
}

@property _Bool isBetaUser;

+ (_Bool)supportsSecureCoding;
+ (id)info;
+ (id)loadSystemInfo;
+ (id)createSystemInfo;
+ (id)systemInfoFromFile:(id)arg1;
+ (_Bool)_sysIsBetaUser;
+ (_Bool)_sysIsProfileInstalledWithIdentifier:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)save;
- (_Bool)saveToFile:(id)arg1;
- (id)initFromSystem;

@end
