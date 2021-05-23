/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CTSweetgumAppsInfo : NSObject

{
    NSArray *_appsList;
    NSString *_appsURL;
}

@property (retain, nonatomic) NSArray *appsList;
@property (retain, nonatomic) NSString *appsURL;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
