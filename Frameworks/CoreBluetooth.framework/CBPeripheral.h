/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class <CBPeripheralDelegate>, CBCentralManager, NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface CBPeripheral : CBPeer {
    struct { 
        unsigned int didUpdateName : 1; 
        unsigned int didModifyServices : 1; 
        unsigned int didInvalidateServices : 1; 
        unsigned int didReadRSSI : 1; 
        unsigned int didUpdateRSSI : 1; 
        unsigned int didDiscoverServices : 1; 
        unsigned int didDiscoverIncludedServices : 1; 
        unsigned int didDiscoverCharacteristics : 1; 
        unsigned int didUpdateCharacteristicValue : 1; 
        unsigned int didWriteCharacteristicValue : 1; 
        unsigned int didNotifyCharacteristicValue : 1; 
        unsigned int didDiscoverDescriptors : 1; 
        unsigned int didUpdateDescriptorValue : 1; 
        unsigned int didWriteDescriptorValue : 1; 
        unsigned int didReceiveTimeSync : 1; 
    NSNumber *_RSSI;
    NSMutableDictionary *_attributes;
    CBCentralManager *_centralManager;
    <CBPeripheralDelegate> *_delegate;
    } _delegateFlags;
    NSString *_name;
    NSMutableArray *_services;
    long long _state;
    bool_isConnectedToSystem;
}

@property(retain) NSNumber * RSSI;
@property <CBPeripheralDelegate> * delegate;
@property(readonly) bool isConnected;
@property(readonly) bool isConnectedToSystem;
@property(retain) NSString * name;
@property(retain) NSArray * services;
@property long long state;

- (id)RSSI;
- (id)attributeForHandle:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)discoverCharacteristics:(id)arg1 forService:(id)arg2;
- (void)discoverDescriptorsForCharacteristic:(id)arg1;
- (void)discoverIncludedServices:(id)arg1 forService:(id)arg2;
- (void)discoverServices:(id)arg1;
- (void)getTimeSyncData;
- (void)handleAttributeEvent:(id)arg1 args:(id)arg2 attributeSelector:(SEL)arg3 delegateSelector:(SEL)arg4 delegateFlag:(bool)arg5;
- (void)handleCharacteristicDescriptorsDiscovered:(id)arg1;
- (void)handleCharacteristicEvent:(id)arg1 characteristicSelector:(SEL)arg2 delegateSelector:(SEL)arg3 delegateFlag:(bool)arg4;
- (void)handleCharacteristicValueNotifying:(id)arg1;
- (void)handleCharacteristicValueUpdated:(id)arg1;
- (void)handleCharacteristicValueWritten:(id)arg1;
- (void)handleConnection:(bool)arg1;
- (void)handleConnectionStateUpdated:(bool)arg1;
- (void)handleDescriptorEvent:(id)arg1 descriptorSelector:(SEL)arg2 delegateSelector:(SEL)arg3 delegateFlag:(bool)arg4;
- (void)handleDescriptorValueUpdated:(id)arg1;
- (void)handleDescriptorValueWritten:(id)arg1;
- (void)handleDisconnection;
- (void)handleMsg:(int)arg1 args:(id)arg2;
- (void)handleNameUpdated:(id)arg1;
- (void)handleRSSIUpdated:(id)arg1;
- (void)handleServiceCharacteristicsDiscovered:(id)arg1;
- (void)handleServiceEvent:(id)arg1 serviceSelector:(SEL)arg2 delegateSelector:(SEL)arg3 delegateFlag:(bool)arg4;
- (void)handleServiceIncludedServicesDiscovered:(id)arg1;
- (void)handleServicesChanged:(id)arg1;
- (void)handleServicesDiscovered:(id)arg1;
- (void)handleTimeSyncResponse:(id)arg1;
- (void)handleWritesExecuted:(id)arg1;
- (bool)hasTag:(id)arg1;
- (id)initWithCentralManager:(id)arg1 dictionary:(id)arg2;
- (void)invalidateAllAttributes;
- (bool)isConnected;
- (bool)isConnectedToSystem;
- (id)name;
- (void)readRSSI;
- (void)readValueForCharacteristic:(id)arg1;
- (void)readValueForDescriptor:(id)arg1;
- (void)reliablyWriteValues:(id)arg1 forCharacteristics:(id)arg2;
- (void)removeAttributeForHandle:(id)arg1;
- (void)sendMsg:(int)arg1 args:(id)arg2;
- (void)sendMsg:(int)arg1 requiresConnected:(bool)arg2 args:(id)arg3;
- (id)sendSyncMsg:(int)arg1 args:(id)arg2;
- (id)services;
- (void)setAttribute:(id)arg1 forHandle:(id)arg2;
- (void)setBroadcastValue:(bool)arg1 forCharacteristic:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNotifyValue:(bool)arg1 forCharacteristic:(id)arg2;
- (void)setOrphan;
- (void)setRSSI:(id)arg1;
- (void)setServices:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)tag:(id)arg1;
- (void)untag:(id)arg1;
- (void)writeValue:(id)arg1 forCharacteristic:(id)arg2 type:(long long)arg3;
- (void)writeValue:(id)arg1 forDescriptor:(id)arg2;

@end