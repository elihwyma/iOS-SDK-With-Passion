/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface MCKeyValueSection : NSObject

{
    NSString *_sectionTitle;
    NSString *_sectionFooter;
    NSArray *_sectionKeyValues;
}

@property (retain, nonatomic) NSString *sectionTitle;
@property (retain, nonatomic) NSString *sectionFooter;
@property (retain, nonatomic) NSArray *sectionKeyValues;

+ (id)sectionWithLocalizedArray:(id)arg1 title:(id)arg2 footer:(id)arg3;
+ (id)sectionWithKeyValues:(id)arg1;

- (id)initWithSectionTitle:(id)arg1 footer:(id)arg2 keyValues:(id)arg3;

@end
