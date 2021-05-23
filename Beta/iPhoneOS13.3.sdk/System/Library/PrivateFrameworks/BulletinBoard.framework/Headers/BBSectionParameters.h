/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class BBSectionIcon, BBSectionSubtypeParameters, NSMutableDictionary, NSString, NSUUID;

@interface BBSectionParameters : NSObject

{
    _Bool _showsSubtitle;
    _Bool _usesVariableLayout;
    _Bool _orderSectionUsingRecencyDate;
    _Bool _showsDateInFloatingLockScreenAlert;
    unsigned long long _messageNumberOfLines;
    BBSectionSubtypeParameters *_defaultSubtypeParameters;
    NSMutableDictionary *_allSubtypeParameters;
    NSString *_displayName;
    BBSectionIcon *_icon;
    NSUUID *_UUID;
}

@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) BBSectionSubtypeParameters *defaultSubtypeParameters;
@property (retain, nonatomic) NSMutableDictionary *allSubtypeParameters;
@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) BBSectionIcon *icon;
@property (nonatomic) _Bool showsSubtitle;
@property (nonatomic) _Bool usesVariableLayout;
@property (nonatomic) unsigned long long messageNumberOfLines;
@property (nonatomic) _Bool orderSectionUsingRecencyDate;
@property (nonatomic) _Bool showsDateInFloatingLockScreenAlert;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (id)parametersForSubtype:(long long)arg1;
- (id)allSubtypes;

@end
