/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CTCellularPlanManagerCameraScanAction : NSObject

{
    NSString *_title;
    NSString *_message;
    NSString *_smdpAddress;
    NSString *_matchingId;
    NSString *_OID;
}

@property (retain, nonatomic) NSString *smdpAddress;
@property (retain, nonatomic) NSString *matchingId;
@property (retain, nonatomic) NSString *OID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)performWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
