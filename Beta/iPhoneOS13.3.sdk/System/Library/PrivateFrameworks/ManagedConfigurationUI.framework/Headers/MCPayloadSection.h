/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MCPayloadSection : NSObject

{
    NSString *_sectionTitle;
    NSString *_sectionFooter;
    NSMutableArray *_payloadInfos;
}

@property (retain, nonatomic) NSString *sectionTitle;
@property (retain, nonatomic) NSString *sectionFooter;
@property (retain, nonatomic) NSMutableArray *payloadInfos;

- (id)init;
- (id)initWithSectionTitle:(id)arg1 footer:(id)arg2 payloadInfos:(id)arg3;

@end
