/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFContact.h>

@class INPerson;

@interface WFINPersonContact : WFContact

{
    INPerson *_person;
}

@property (retain, nonatomic) INPerson *person;

+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (id)contactWithPerson:(id)arg1;

- (id)initWithINPerson:(id)arg1;
- (id)wfName;
- (id)wfSerializedRepresentation;
- (id)inPerson;

@end
