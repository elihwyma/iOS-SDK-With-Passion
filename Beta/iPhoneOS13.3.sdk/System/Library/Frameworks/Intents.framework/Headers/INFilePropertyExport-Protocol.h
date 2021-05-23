/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INDateComponentsRange, INPerson, NSNumber, NSString;

@protocol INFilePropertyExport <Swift>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *qualifier;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) INDateComponentsRange *dateComponentsRange;
@property (copy, nonatomic) INPerson *person;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSNumber *quantity;

- (unsigned short)init;

@end
