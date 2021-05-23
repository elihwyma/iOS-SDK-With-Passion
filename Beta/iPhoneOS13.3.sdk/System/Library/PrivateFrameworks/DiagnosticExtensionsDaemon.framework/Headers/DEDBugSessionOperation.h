/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface DEDBugSessionOperation : NSObject

{
    long long _type;
    NSDictionary *_options;
    NSString *_identifier;
}

@property long long type;
@property (retain) NSDictionary *options;
@property (retain) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)archivedClasses;
+ (id)hashingKeyWithId:(id)arg1 type:(long long)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)hashingKey;

@end
