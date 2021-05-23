/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNPropertyGroupItem, NSArray, NSMutableArray;

@protocol CNCancelable, CNPropertyBestIDSValueQueryDelegate;

__attribute__((visibility("hidden")))
@interface CNPropertyBestIDSValueQuery : NSObject

{
    NSMutableArray *_validIDSItems;
    id <CNPropertyBestIDSValueQueryDelegate> _delegate;
    NSArray *_propertyItems;
    NSArray *_idsHandles;
    id <CNCancelable> _idsLookupToken;
    NSMutableArray *_validIDSHandles;
}

@property (retain, nonatomic) NSArray *propertyItems;
@property (retain, nonatomic) NSArray *idsHandles;
@property (retain, nonatomic) id <CNCancelable> idsLookupToken;
@property (retain, nonatomic) NSMutableArray *validIDSHandles;
@property (nonatomic, readonly) NSMutableArray *validIDSItems;
@property (nonatomic, readonly) CNPropertyGroupItem *bestIDSProperty;
@property (weak, nonatomic) id <CNPropertyBestIDSValueQueryDelegate> delegate;

- (void)cancel;
- (id)initWithPropertyItems:(id)arg1 service:(id)arg2;
- (id)initWithPropertyItems:(id)arg1 service:(id)arg2 idsAvailabilityProvider:(id)arg3 schedulerProvider:(id)arg4;

@end
