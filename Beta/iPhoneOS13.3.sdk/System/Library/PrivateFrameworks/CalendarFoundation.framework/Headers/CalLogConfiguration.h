/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface CalLogConfiguration : NSObject

{
    NSString *_name;
    NSMutableArray *_nodes;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *nodes;

- (id)init;
- (id)description;
- (id)initWithSimpleDefinition:(id)arg1;
- (void)parseConfigurationDefinition:(id)arg1;
- (id)parseNodeDefinition:(id)arg1;
- (id)parseWriterDefinition:(id)arg1;
- (id)parseFilterDefinition:(id)arg1;
- (id)initWithDetailedDefinition:(id)arg1;

@end
