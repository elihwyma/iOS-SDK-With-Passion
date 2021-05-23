/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface MKWebMessage : NSObject

{
    NSString *_type;
    NSString *_caller;
    NSString *_callee;
    NSString *_method;
    NSNumber *_callNumber;
    NSString *_status;
    id <NSCopying> _arguments;
    id <NSCopying> _result;
    NSString *_errorMessage;
}

@property (copy, nonatomic, readonly) NSDictionary *JSONObject;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *caller;
@property (copy, nonatomic) NSString *callee;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSNumber *callNumber;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) id <NSCopying> arguments;
@property (copy, nonatomic) id <NSCopying> result;
@property (copy, nonatomic) NSString *errorMessage;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithJSONObject:(id)arg1;

@end
