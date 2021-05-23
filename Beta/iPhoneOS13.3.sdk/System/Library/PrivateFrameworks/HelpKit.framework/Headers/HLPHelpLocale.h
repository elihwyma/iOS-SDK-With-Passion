/*
 Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface HLPHelpLocale : NSObject

{
    NSString *_path;
    NSArray *_isoCodes;
}

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSArray *isoCodes;

- (id)debugDescription;
- (id)initWithDictionary:(id)arg1;

@end
