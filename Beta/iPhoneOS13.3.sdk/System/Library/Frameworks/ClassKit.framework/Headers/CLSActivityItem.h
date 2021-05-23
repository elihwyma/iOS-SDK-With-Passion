/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <ClassKit/CLSObject.h>

@class NSString;

@interface CLSActivityItem : CLSObject

{
    NSString *_title;
    NSString *_identifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;

+ (_Bool)supportsSecureCoding;
+ (id)relations;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)dictionaryRepresentation;
- (_Bool)validateObject:(id *)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2;

@end
