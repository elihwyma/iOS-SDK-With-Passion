/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSFormatter.h>

@interface HFServiceStateDescriptionFormatter : NSFormatter

{
    unsigned long long _descriptionContext;
}

@property (nonatomic) unsigned long long descriptionContext;

- (id)stringForObjectValue:(id)arg1;

@end
