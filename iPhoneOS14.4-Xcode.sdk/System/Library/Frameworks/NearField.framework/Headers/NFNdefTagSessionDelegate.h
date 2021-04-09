//
//  NFNdefTagSessionDelegate.h
//  Aemulo
//
//  Created by Amy While on 08/10/2020.
//

@protocol NFNdefTagSessionDelegate <NSObject>
@optional
-(void)ndefTagSession:(id)arg1 didTagStateChange:(unsigned)arg2;
-(void)ndefTagSessionDidEndUnexpectedly:(id)arg1;
@end
