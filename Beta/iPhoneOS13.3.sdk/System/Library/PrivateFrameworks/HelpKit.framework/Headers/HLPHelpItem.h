/*
 Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface HLPHelpItem : NSObject

{
    NSString *_decodedName;
    HLPHelpItem *_parent;
    long long _serverType;
    long long _level;
    NSURL *_iconURL;
    NSString *_name;
    NSString *_identifier;
}

@property (weak, nonatomic) HLPHelpItem *parent;
@property (nonatomic) long long serverType;
@property (nonatomic) long long level;
@property (copy, nonatomic) NSURL *iconURL;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, readonly) NSString *decodedName;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1 helpBookURL:(id)arg2 serverType:(long long)arg3;

@end
