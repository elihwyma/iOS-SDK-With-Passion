/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSCalendarEventData : NSObject

{
    NSString *_icsString;
}

@property (copy, nonatomic, readonly) NSString *icsString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) NSString *extraPreviewText;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithICSString:(id)arg1;

@end
