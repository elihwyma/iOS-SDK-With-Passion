/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MSASPersonInfoManager : NSObject

{
    NSMutableDictionary *_personIDToPersonInfoDictionary;
    NSString *_pathForPersonInfoDictionary;
}

@property (retain, nonatomic) NSMutableDictionary *personIDToPersonInfoDictionary;
@property (retain, nonatomic) NSString *pathForPersonInfoDictionary;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedManager;

- (void)initWithPath:(id)arg1;
- (id)firstNameForPersonID:(id)arg1;
- (id)lastNameForPersonID:(id)arg1;
- (id)fullNameForPersonID:(id)arg1;
- (id)emailForPersonID:(id)arg1;
- (_Bool)updateWithSharingRelationship:(id)arg1;

@end
